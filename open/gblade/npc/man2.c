
inherit NPC;
void create()
{
set_name("����",({"man"}) );
	set("gender", "����" );
        set("age",45);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
set("long","һ��������ϰ�õ�����.\n"
                "����æ�����Ĺ���.\n");
set("combat_exp",10000);
	set("attitude", "peaceful");
set("max_kee",2000);
        set("chat_chance", 25);
set_skill("parry",30);
set_skill("unarmed",30);
set_skill("dodge",30);
	setup();
         	
}

