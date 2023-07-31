# Kills process named killmenow
exec { 'killmenow':
  command  => 'pkill -KILL killmenow',
  provider => 'shell'
}
