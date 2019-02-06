module.exports = {
  siteMetadata: {
    siteUrl: 'https://blimpos.org/',
    title: 'BlimpOS',
  },
  plugins: [
    'gatsby-plugin-react-helmet',
    {
      resolve: 'gatsby-plugin-reason',
      options: {
        derivePathFromComponentName: true,
      },
    },
  ],
}
