module Helmet = {
  [@bs.module "react-helmet"]
  external linkClass: ReasonReact.reactClass = "default";

  type metaT =
    option(
      array({
        .
        "name": string,
        "content": string,
      }),
    );

  let make =
      (~title: option(string)=?, ~bodyAttributes=?, ~meta: metaT=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=linkClass,
      ~props={
        "title": Js.Nullable.fromOption(title),
        "bodyAttributes": Js.Nullable.fromOption(bodyAttributes),
        "meta": Js.Nullable.fromOption(meta),
      },
      children,
    );
};
