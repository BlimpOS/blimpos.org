let component = ReasonReact.statelessComponent("index");

module Helmet = Gatsby.Helmet;

let make = _children => {
  ...component,
  render: _self => <> <Helmet title="BlimpOS" /> <Logo /> </>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
