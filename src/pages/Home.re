let component = ReasonReact.statelessComponent("Home");

let make = _children => {
  ...component,
  render: _self => <Layout> <Logo /> </Layout>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
