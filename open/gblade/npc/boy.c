inherit NPC;

void create()
{
	set_name("Сͯ",({"little boy","boy"}));
	set("long","һ��ʮ�����Сͯ .\n");
	set("gender","����");
	set("combat_exp",147);
	set("attitude","friendly");
	set("age",11);
	set("class","blademan");
	set("str",12);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("blade",10);
	set_skill("dodge",10);
	set_skill("parry",10);
	setup();
	carry_object("/open/gsword/obj/suit")->wear();
}
  void greeting(object ob)
   {
    say("Сͯ�������������˸��� .\n");
    call_out("do_act1",1);
    }
   void do_act1()
   {
    say("Сͯ������֮���Ӷ�����Ԫ��ǰ .\n");
	call_out("do_act2",3);
    }
    void do_act2()
    {
    say("Сͯ˵��: С�ĸ��� .\n");
    call_out("do_act3",1);
 }
   void do_act3()
   {
   say("Сͯ������ȥ .\n");
   destruct(this_object());
   }
