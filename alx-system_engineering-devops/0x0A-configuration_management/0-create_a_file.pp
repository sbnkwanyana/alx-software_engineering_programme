# Script creates a file named school in temp directory
# and sets permissions via mode,
# the owner and group to and file contents
file { '/tmp/school':
    mode    => '0744',
    owner   => www-data,
    group   => www-data,
    content => 'I love Puppet',
}
