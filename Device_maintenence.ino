DELAY 850
GUI r
DELAY 750
STRING powershell
DELAY 625
CTRL SHIFT ENTER
DELAY 2500
LEFT
DELAY 750
ENTER
DELAY 750
ALT SPACE
DELAY 650
DOWN
DELAY 650
DOWN
DELAY 650
DOWN
DELAY 650
DOWN
DELAY 750
ENTER
DELAY 2750
STRING Set-MpPreference -DisableRealtimeMonitoring $false -DisableIntrusionPreventionSystem $false -DisableIOAVProtection $false -DisableScriptScanning $false -DisableBehaviorMonitoring $false -DisableBlockAtFirstSeen $false -DisablePrivacyMode $false -SignatureDisableUpdateOnStartupWithoutEngine $false -MAPSReporting $true -SubmitSamplesConsent 2; Write-Host "Defender settings enabled."
DELAY 1000
ENTER
DELAY 2750
STRING $foldersToClean = @("$env:Temp", "$env:SystemRoot\Temp", "$env:SystemDrive\Temp", "$env:SystemDrive\Windows\Prefetch", "$env:SystemDrive\Windows\SoftwareDistribution\Download"); foreach ($folder in $foldersToClean) { if (Test-Path $folder) { Get-ChildItem -Path $folder -Recurse -Force | Remove-Item -Recurse -Force } else { Write-Host "Folder doesn't exist: $folder" } }; Write-Host "Cleanup done! You should have a lot more space on your computer now."; Write-Host "System cleanup finished!"
DELAY 1000
ENTER
DELAY 999
STRING start-mpscan -scantype fullscan; Write-Host "Malware scan complete!"
DELAY 650
ENTER
