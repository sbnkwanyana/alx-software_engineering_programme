import router from './routes/index'

const express = require('express')

const port = process.env.PORT || 5000

const app = express()

app.use(express.json())
app.use(express.urlencoded({ extended: true }))
app.use(router)

app.listen(port, () => {
    console.log(`Server running on port ${port}`)
})
