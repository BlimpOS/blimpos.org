let component = ReasonReact.statelessComponent("Home")

let s = ReasonReact.string

let make = _children => {
  ...component,
  render: (_self) =>
    <Layout>
      <div>
        ("BlimpOS" |> s)
      </div>
    </Layout>
}

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]))