Terraform - Download and Extract: https://releases.hashicorp.com/terraform/1.7.4/terraform_1.7.4_windows_amd64.zip

Install AWSCLIV2

Setup Personal AWS ACcount -> Create IAM user -> Generate Access Keys

Configure AWS CLI
  aws configure

Extract terraform zip file, locally.

- Save as main.tf file locally at the same location as terraform.exe:
```
module "ec2-instance" {
  source  = "terraform-aws-modules/ec2-instance/aws"
  version = "5.0.0"
}
```
- Provider based EC2 instance
```
provider "aws" {
  region = "us-east-1"
}

resource "aws_instance" "devops-ex-7" {
  ami           = "ami-0f403e3180720dd7e"
  instance_type = "t2.micro"
}
```
- Provider based S3 bucket
```
provider "aws" {
  region = "us-east-1"
}

resource "aws_s3_bucket" "my_bucket" {
  bucket_prefix = "my-bucket-prefix"
}

```
- Provider based
```
provider "aws" {
  region = "us-east-1"
}

resource "aws_sns_topic" "devops-ex-8" {
  name = "devops-ex-8"
}
```
Open Terminal/Windows Powershell.

Execute following commands:
```
.\terraform.exe init
```
```
.\terraform.exe plan
```
```
.\terraform.exe apply
```
```
.\terraform.exe destroy
```
