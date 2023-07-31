# Increases nginx's request limit

exec { 'Update limit':
  command => "sed -i 's/15/2000/' /etc/default/nginx; sudo service nginx restart",
  path    => '/usr/bin/:/usr/local/bin/:/bin/'
}
