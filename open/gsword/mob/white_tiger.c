inherit NPC;

void create()
{
	set_name("�׻�", ({"white tiger","tiger"})) ;
	set("race", "Ұ��");
	set("age",20);
set("long","�����ѵ�һ���İ׻�,���Ű�ѩһ���ëɫ,������������ڵ���,������
�ĳ���,����ס̫ע��,Ҳ��,�������˸�������ս��!\n");
	set("str",60);
	set("con",50);
	set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );
		
        set("attitude","friendly");
	set("kee",600);
	set("combat_exp",41280);
	set("max_kee",600);
	set_temp("apply/armor",40);
	set_temp("apply/dodge",40);
	set_temp("apply/attack",40);
	setup();
}

