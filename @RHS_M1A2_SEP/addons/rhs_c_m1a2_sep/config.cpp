class CfgPatches
{
    class ray_rhs_m1a2sep3
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.83;
        requiredAddons[] = {"rhsusf_main","A3_Armor_F_Slammer","rhsusf_c_m1a2"};
        name = "RHS M1A2 SEPv3";
        author = "Raynor.D";
        url = "https://github.com/RaynorD/RHS-M1A2-SEP";
    };
};

class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};

class CfgVehicles
{
    class LandVehicle;
    class Tank: LandVehicle
    {
        class NewTurret;
    };
    class Tank_F: Tank
    {
        class ViewOptics;
        class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets
                {
                    class CommanderOptics;
                };
            };
        };
    };
    class MBT_01_base_F: Tank_F {};
    class rhsusf_m1a1tank_base: MBT_01_base_F {};
    class rhsusf_m1a2tank_base : rhsusf_m1a1tank_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                turretInfoType = "RscOptics_MBT_01_gunner";
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
                class OpticsIn
                {
                    class Wide: ViewOptics
                    {
                        gunnerOpticsEffect[] = {};
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        
                        initFov = "0.7/3"; //0.23
                        minFov = "0.7/3";
                        maxFov = "0.7/3";
                        thermalMode[] = {2,3};
                        visionMode[] = {"Normal","NVG","TI"};
                    };
                    class Medium: Wide
                    {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                        initFov = "0.7/6";
                        minFov = "0.7/6";
                        maxFov = "0.7/6";
                        thermalMode[] = {2,3};
                        visionMode[] = {"Normal","NVG","TI"};
                    };
                    class Wide_TI: Wide
                    {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                        initFov = "0.7/10";
                        minFov = "0.7/10";
                        maxFov = "0.7/10";
                        thermalMode[] = {2,3};
                        visionMode[] = {"Normal","NVG","TI"};
                    };
                    class Wide2_TI: Wide_TI
                    {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_3";
                        initFov = "0.7/17.5";
                        minFov = "0.7/17.5";
                        maxFov = "0.7/17.5";
                        thermalMode[] = {2,3};
                        visionMode[] = {"Normal","NVG","TI"};
                    };
                    class Medium_TI: Wide_TI
                    {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_3";
                        initFov = "0.7/25";
                        minFov = "0.7/25";
                        maxFov = "0.7/25";
                        thermalMode[] = {2,3};
                        visionMode[] = {"Normal","NVG","TI"};
                    };
                    class Medium2_TI: Wide_TI
                    {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_3";
                        initFov = "0.7/37.5";
                        minFov = "0.7/37.5";
                        maxFov = "0.7/37.5";
                        visionMode[] = {"Normal","NVG","TI"};
                    };
                    class Narrow_TI: Wide_TI
                    {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_3";
                        initFov = "0.7/50";
                        minFov = "0.7/50";
                        maxFov = "0.7/50";
                        thermalMode[] = {2,3};
                        visionMode[] = {"Normal","NVG","TI"};
                    };
                };
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        turretInfoType = "RscOptics_MBT_01_commander";
                        class OpticsIn: Optics_Commander_01
                        {
                            class Medium_TI: Medium
                            {
                                visionMode[] = {"Normal","NVG","TI"};
                            };
                            class Medium2_TI: Medium_TI
                            {
                                visionMode[] = {"Normal","NVG","TI"};
                            };
                            class Narrow_TI: Medium_TI
                            {
                                visionMode[] = {"Normal","NVG","TI"};
                            };
                        };
                    };
                    class Loader: CommanderOptics
                    {
                        minTurn = -30;
						maxTurn = 170;
                    };
                };
            };
        };
    };
    
    class rhsusf_m1a2sep1d_usarmy: rhsusf_m1a2tank_base
	{
        displayName = "M1A2SEPv3";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"rhs_weap_m256_sep","rhs_weap_m240_abrams_coax_sep"};
            };
        };
    };
    class rhsusf_m1a2sep1wd_usarmy: rhsusf_m1a2tank_base
	{
        displayName = "M1A2SEPv3";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"rhs_weap_m256_sep","rhs_weap_m240_abrams_coax_sep"};
            };
        };
    };
    class rhsusf_m1a2sep1tuskid_usarmy: rhsusf_m1a2tank_base
	{
        displayName = "M1A2SEPv3 (TUSK I)";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"rhs_weap_m256_sep","RHS_M2_Abrams_Gunner_sep","rhs_weap_m240_abrams_coax_sep"};
            };
        };
    };
    class rhsusf_m1a2sep1tuskiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy
	{
        displayName = "M1A2SEPv3 (TUSK I)";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"rhs_weap_m256_sep","RHS_M2_Abrams_Gunner_sep","rhs_weap_m240_abrams_coax_sep"};
            };
        };
    };
    class rhsusf_m1a2sep1tuskiiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy
	{
        displayName = "M1A2SEPv3 (TUSK II)";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"rhs_weap_m256_sep","RHS_M2_Abrams_Gunner_sep","rhs_weap_m240_abrams_coax_sep"};
            };
        };
    };
    class rhsusf_m1a2sep1tuskiid_usarmy: rhsusf_m1a2sep1tuskiiwd_usarmy
	{
        displayName = "M1A2SEPv3 (TUSK II)";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"rhs_weap_m256_sep","RHS_M2_Abrams_Gunner_sep","rhs_weap_m240_abrams_coax_sep"};
            };
        };
    };
    
};

class CfgWeapons
{
    class rhs_weap_m256;
    class rhs_weap_m256_sep: rhs_weap_m256
    {
        ballisticsComputer = "2 + 16";
        FCSMaxLeadSpeed = 25;
    };
    class rhs_weap_m240_abrams_coax;
    class rhs_weap_m240_abrams_coax_sep: rhs_weap_m240_abrams_coax
    {
        ballisticsComputer = "2 + 16";
        FCSMaxLeadSpeed = 30.5556; // copied from ACE_LMG_coax_MAG58_mem3
    };
};
