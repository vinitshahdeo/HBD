#Wishing Happy Birthday in Powershell

$birthdayDate= Read-Host "Enter your birthday in MM/DD/YYYY Format"

$today=Get-date

if($birthdayDate -eq $today){
  write-host "Happy Birthday to You"
}
