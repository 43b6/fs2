
inherit NPC;

void create()
{
        set_name("��Ů", ({ "Castle lady", "lady" }));
        set("long",
                "�����ڻʳ����һλ��Ů,ƽ�������ڻʵۻ��������Է���, \n
"
                "�������΢Ц�Ŀ�����,������¶�����ɵ�����,������Ϊʲ\n
"
                "ô����������� \n");


	set("gender","Ů��");
         set("age", 22);
	set("str",18);
	set("cor", 18);
	set("cps", 18);

	set("combat_exp",3200);


        set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
                "��Ů���� : ������!!�д̿Ͱ�!! \n",
                "��Ů���� : �����˰�~~~~�������·��������!! \n",
        }) );

        set_skill("unarmed", 30);
        set_skill("parry", 40);
        set_skill("dodge", 40);
	set_skill("move", 40);


        setup();

	carry_object("/open/capital/obj/silk_cloth2")->wear();
}

