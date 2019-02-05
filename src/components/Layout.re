let component = ReasonReact.statelessComponent("Layout");

let make = children => {
  ...component,
  render: _self => <main> ...children </main>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
