class CfgGroups {
	class WEST {
		class PMCS_B {
			name = "PMC Sentinel";

			class Infantry {
				name = "Infantry";

				class pmcs_b_inf_sq {
					name = "Squad";
					side = 1;
					faction = "PMCS_B";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

					UNIT_0(SERGEANT,PMCS_B_SquadLeader);
					UNIT_1(CORPORAL,PMCS_B_Marksman);
					UNIT_2(PRIVATE,PMCS_B_Rifleman);
					UNIT_3(CORPORAL,PMCS_B_Rifleman_LAT);

					UNIT_4(SERGEANT,PMCS_B_TeamLeader);
					UNIT_5(CORPORAL,PMCS_B_Autorifleman);
					UNIT_6(PRIVATE,PMCS_B_Rifleman);
					UNIT_7(CORPORAL,PMCS_B_Rifleman_LAT);
				};

				class pmcs_b_inf_ft {
					name = "Fire Team";
					side = 1;
					faction = "PMCS_B";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

					UNIT_0(SERGEANT,PMCS_B_TeamLeader);
					UNIT_1(CORPORAL,PMCS_B_Autorifleman);
					UNIT_2(PRIVATE,PMCS_B_Rifleman);
					UNIT_3(CORPORAL,PMCS_B_Rifleman_LAT);
				};
			};
		};
	};
};