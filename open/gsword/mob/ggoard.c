// copy from /d/snow/npc/teacher.c

inherit NPC;

void create()
{
	set_name("����", ({ "statue"}) );
	set("gender", "����" );
	set("age", 63);
	set("int", 26);
        set("long","�������Լ���߳߸ߣ�����ȥ����������������Ľ���һ�㡣\n");
	set("combat_exp",50000);
        set("max_kee",500);
        set("max_gin",500);                        
	set_skill("unarmed",50);
	set_skill("parry",50);
	set_skill("force",50);
	setup();
   }
