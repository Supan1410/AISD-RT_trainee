from setuptools import find_packages, setup

package_name = 'smo'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='supan',
    maintainer_email='supancshah2005@gmail.com',
    description='SMO',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ma= smo.marker:main',
            'sm= smo.smo_node:main',
            'cl= smo.client_node:main',
            ],
    },
)
