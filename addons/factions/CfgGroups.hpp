#define pmcs_b_mot_ptrl_UNIT_1_POS {0,-7,0}
#define pmcs_b_mot_ptrl_UNIT_2_POS {5,-12,0}
#define pmcs_b_mot_ptrl_UNIT_3_POS {-5,-12,0}
#define pmcs_b_mot_ptrl_h_UNIT_1_POS {0,-7,0}
#define pmcs_b_mot_ptrl_h_UNIT_2_POS {5,-12,0}
#define pmcs_b_mot_ptrl_h_UNIT_3_POS {-5,-12,0}
#define pmcs_b_mot_transport_UNIT_8_POS {0,-22,0}

class CfgGroups {
	class WEST {
		class PMCS_B_D {
			name = CSTRING(BLUFOR_DisplayName_D);

			class Infantry {
				name = CSTRING(GroupSet_Infantry);

				class pmcs_b_d_inf_sq {
					name = CSTRING(Group_I_Squad);
					GMETA(D);

					UNIT_0(SERGEANT,PMCS_B_D_SquadLeader);
					UNIT_1(CORPORAL,PMCS_B_D_Medic);
					UNIT_2(CORPORAL,PMCS_B_D_EOD);

					UNIT_3(SERGEANT,PMCS_B_D_TeamLeader);
					UNIT_4(CORPORAL,PMCS_B_D_Autorifleman);
					UNIT_5(CORPORAL,PMCS_B_D_MissileSpecialist);
				};

				class pmcs_b_d_inf_ft {
					name = CSTRING(Group_I_FireTeam);
					GMETA(D);

					UNIT_0(SERGEANT,PMCS_B_D_TeamLeader);
					UNIT_1(PRIVATE,PMCS_B_D_Rifleman);
					UNIT_2(CORPORAL,PMCS_B_D_Autorifleman);
				};

				class pmcs_b_d_inf_ft_at {
					name = CSTRING(Group_I_FireTeam_AT);
					GMETA(D);

					UNIT_0(SERGEANT,PMCS_B_D_TeamLeader);
					UNIT_1(CORPORAL,PMCS_B_D_Autorifleman);
					UNIT_2(CORPORAL,PMCS_B_D_MissileSpecialist);
				};

				class pmcs_b_d_inf_ft_cls {
					name = CSTRING(Group_I_FireTeam_CLS);
					GMETA(D);

					UNIT_0(SERGEANT,PMCS_B_D_TeamLeader);
					UNIT_1(PRIVATE,PMCS_B_D_Rifleman);
					UNIT_2(CORPORAL,PMCS_B_D_Medic);
				};

				class pmcs_b_d_inf_ft_eod {
					name = CSTRING(Group_I_FireTeam_EOD);
					GMETA(D);

					UNIT_0(SERGEANT,PMCS_B_D_TeamLeader);
					UNIT_1(PRIVATE,PMCS_B_D_Rifleman);
					UNIT_2(CORPORAL,PMCS_B_D_EOD);
				};
			};

			class Motorized {
				name = CSTRING(GroupSet_Motorized);

				class pmcs_b_d_mot_ptrl {
					name = CSTRING(Group_MO_Patrol);
					GMETA(D);

					UNIT_0(PRIVATE,PMCS_B_D_WMIK_GPMG_FFR);

					UNIT_XX(1,pmcs_b_mot_ptrl_UNIT_1_POS,SERGEANT,PMCS_B_D_TeamLeader);
					UNIT_XX(2,pmcs_b_mot_ptrl_UNIT_2_POS,CORPORAL,PMCS_B_D_Autorifleman);
					UNIT_XX(3,pmcs_b_mot_ptrl_UNIT_3_POS,CORPORAL,PMCS_B_D_EOD);
				};

				class pmcs_b_d_mot_ptrl_h {
					name = CSTRING(Group_MO_PatrolHeavy);
					GMETA(D);

					UNIT_0(PRIVATE,PMCS_B_D_M1232_M2);

					UNIT_XX(1,pmcs_b_mot_ptrl_h_UNIT_1_POS,SERGEANT,PMCS_B_D_TeamLeader);
					UNIT_XX(2,pmcs_b_mot_ptrl_h_UNIT_2_POS,CORPORAL,PMCS_B_D_Autorifleman);
					UNIT_XX(3,pmcs_b_mot_ptrl_h_UNIT_3_POS,CORPORAL,PMCS_B_D_MissileSpecialist);
				};

				class pmcs_b_d_mot_transport {
					name = CSTRING(Group_MO_Transport);
					GMETA(D);

					UNIT_0(SERGEANT,PMCS_B_D_SquadLeader);
					UNIT_1(CORPORAL,PMCS_B_D_Medic);
					UNIT_2(CORPORAL,PMCS_B_D_EOD);

					UNIT_3(SERGEANT,PMCS_B_D_TeamLeader);
					UNIT_4(CORPORAL,PMCS_B_D_Autorifleman);
					UNIT_5(CORPORAL,PMCS_B_D_MissileSpecialist);

					UNIT_XX(8,pmcs_b_mot_transport_UNIT_8_POS,PRIVATE,PMCS_B_D_M1232_M2);
				};
			};

			class SpecOps {
				name = CSTRING(GroupSet_SpecOps);

				class pmcs_b_d_so_recon {
					name = CSTRING(Group_SP_ReconTeam);
					GMETA(D);

					UNIT_0(SERGEANT,PMCS_B_D_SquadLeader);
					UNIT_1(CORPORAL,PMCS_B_D_Marksman);
					UNIT_2(CORPORAL,PMCS_B_D_Marksman);
				};
			};

			class Support {
				name = CSTRING(GroupSet_Support);

				class pmcs_b_d_su_gp {
					name = CSTRING(Group_SU_GunnerPair);
					GMETA(D);

					UNIT_0(SERGEANT,PMCS_B_D_Autorifleman);
					UNIT_1(CORPORAL,PMCS_B_D_Autorifleman);
				};
			};
		};

		class PMCS_B_W {
			name = CSTRING(BLUFOR_DisplayName_W);

			class Infantry {
				name = CSTRING(GroupSet_Infantry);

				class pmcs_b_w_inf_sq {
					name = CSTRING(Group_I_Squad);
					GMETA(W);

					UNIT_0(SERGEANT,PMCS_B_W_SquadLeader);
					UNIT_1(CORPORAL,PMCS_B_W_Medic);
					UNIT_2(CORPORAL,PMCS_B_W_EOD);

					UNIT_3(SERGEANT,PMCS_B_W_TeamLeader);
					UNIT_4(CORPORAL,PMCS_B_W_Autorifleman);
					UNIT_5(CORPORAL,PMCS_B_W_MissileSpecialist);
				};

				class pmcs_b_w_inf_ft {
					name = CSTRING(Group_I_FireTeam);
					GMETA(W);

					UNIT_0(SERGEANT,PMCS_B_W_TeamLeader);
					UNIT_1(PRIVATE,PMCS_B_W_Rifleman);
					UNIT_2(CORPORAL,PMCS_B_W_Autorifleman);
				};

				class pmcs_b_w_inf_ft_at {
					name = CSTRING(Group_I_FireTeam_AT);
					GMETA(W);

					UNIT_0(SERGEANT,PMCS_B_W_TeamLeader);
					UNIT_1(CORPORAL,PMCS_B_W_Autorifleman);
					UNIT_2(CORPORAL,PMCS_B_W_MissileSpecialist);
				};

				class pmcs_b_w_inf_ft_cls {
					name = CSTRING(Group_I_FireTeam_CLS);
					GMETA(W);

					UNIT_0(SERGEANT,PMCS_B_W_TeamLeader);
					UNIT_1(PRIVATE,PMCS_B_W_Rifleman);
					UNIT_2(CORPORAL,PMCS_B_W_Medic);
				};

				class pmcs_b_w_inf_ft_eod {
					name = CSTRING(Group_I_FireTeam_EOD);
					GMETA(W);

					UNIT_0(SERGEANT,PMCS_B_W_TeamLeader);
					UNIT_1(PRIVATE,PMCS_B_W_Rifleman);
					UNIT_2(CORPORAL,PMCS_B_W_EOD);
				};
			};

			class Motorized {
				name = CSTRING(GroupSet_Motorized);

				class pmcs_b_w_mot_ptrl {
					name = CSTRING(Group_MO_Patrol);
					GMETA(W);

					UNIT_0(PRIVATE,PMCS_B_W_WMIK_GPMG_FFR);

					UNIT_XX(1,pmcs_b_mot_ptrl_UNIT_1_POS,SERGEANT,PMCS_B_W_TeamLeader);
					UNIT_XX(2,pmcs_b_mot_ptrl_UNIT_2_POS,CORPORAL,PMCS_B_W_Autorifleman);
					UNIT_XX(3,pmcs_b_mot_ptrl_UNIT_3_POS,CORPORAL,PMCS_B_W_EOD);
				};

				class pmcs_b_w_mot_ptrl_h {
					name = CSTRING(Group_MO_PatrolHeavy);
					GMETA(W);

					UNIT_0(PRIVATE,PMCS_B_D_M1232_M2);

					UNIT_XX(1,pmcs_b_mot_ptrl_h_UNIT_1_POS,SERGEANT,PMCS_B_W_TeamLeader);
					UNIT_XX(2,pmcs_b_mot_ptrl_h_UNIT_2_POS,CORPORAL,PMCS_B_W_Autorifleman);
					UNIT_XX(3,pmcs_b_mot_ptrl_h_UNIT_3_POS,CORPORAL,PMCS_B_W_MissileSpecialist);
				};

				class pmcs_b_w_mot_transport {
					name = CSTRING(Group_MO_Transport);
					GMETA(W);

					UNIT_0(SERGEANT,PMCS_B_W_SquadLeader);
					UNIT_1(CORPORAL,PMCS_B_W_Medic);
					UNIT_2(CORPORAL,PMCS_B_W_EOD);

					UNIT_3(SERGEANT,PMCS_B_W_TeamLeader);
					UNIT_4(CORPORAL,PMCS_B_W_Autorifleman);
					UNIT_5(CORPORAL,PMCS_B_W_MissileSpecialist);

					UNIT_XX(8,pmcs_b_mot_transport_UNIT_8_POS,PRIVATE,PMCS_B_W_M1232_M2);
				};
			};

			class SpecOps {
				name = CSTRING(GroupSet_SpecOps);

				class pmcs_b_w_so_recon {
					name = CSTRING(Group_SP_ReconTeam);
					GMETA(W);

					UNIT_0(SERGEANT,PMCS_B_W_SquadLeader);
					UNIT_1(CORPORAL,PMCS_B_W_Marksman);
					UNIT_2(CORPORAL,PMCS_B_W_Marksman);
				};
			};

			class Support {
				name = CSTRING(GroupSet_Support);

				class pmcs_b_w_su_gp {
					name = CSTRING(Group_SU_GunnerPair);
					GMETA(W);

					UNIT_0(SERGEANT,PMCS_B_W_Autorifleman);
					UNIT_1(CORPORAL,PMCS_B_W_Autorifleman);
				};
			};
		};
	};
};