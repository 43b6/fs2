// copy from /d/snow/npc/teacher.c

inherit NPC;

void create()
{
	set_name("һλ�ɷ���ǵ�����", ({ "oldman","man"}) );
	set("gender", "����" );
	set("age", 63);
	set("int", 26);
set("long","��ǰ��λ�����������ʮ������˫�۾�������һ�������⹦����¯����֮����\n");
	set("combat_exp",50000);
        set("chat_chance_combat",6);
	set("chat_msg_combat",({
"��������κ��˲��ý�����أ����ǻ�����ذɣ�\n
����֮�£��Ҳ�׷�������ˡ�����Ļ����ٺ٣�������������顣\n"}));
        set("max_kee",500);
        set("max_gin",500);                        
	set("attitude","aggressvie");
	set_skill("unarmed",50);
	set_skill("parry",50);
	set_skill("force",50);
	set_skill("shasword",40);
	map_skill("sword","shasword");
	setup();
        carry_object("/open/gsword/obj/sword-1")->wield();
        carry_object("/open/gsword/obj/robe_3")->wield();
        add_money("gold",8);
   }

