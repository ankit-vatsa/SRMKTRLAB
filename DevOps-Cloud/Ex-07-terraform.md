Terraform - Download and Extract: https://releases.hashicorp.com/terraform/1.7.4/terraform_1.7.4_windows_amd64.zip

Install AWSCLIV2

Setup Personal AWS ACcount -> Create IAM user -> Generate Access Keys

Configure AWS CLI
  aws configure

Extract terraform zip file, locally.

Save as main.tf file locally at the same location as terraform.exe:

module "ec2-instance" {
  source  = "terraform-aws-modules/ec2-instance/aws"
  version = "5.0.0"
}

Open Terminal/Windows Powershell.

Execute following commands:

.\terraform.exe init

.\terraform.exe plan

.\terraform.exe apply

.\terraform.exe destroy
