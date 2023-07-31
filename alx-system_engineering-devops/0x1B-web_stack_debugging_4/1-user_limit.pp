# Remove file limits for user holberton

file { 'Remove limits':
    ensure  => present,
    path    => '/etc/security/limits.conf',
    content => ' '
}
