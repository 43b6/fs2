//ggirl.c//cgy
inherit NPC;

void create()
{
        set_name("��Ů",({"girl"}));
        set("long","ҹ��С���ĵ��ӡ�\n");
        set("gender","Ů��");
        set("combat_exp",100000);
        set("attitude","heroism");
        set("age",14);
        set("class","dancer");
        set("score",1000);
        set("force",150);
        set("max_force",150);
        set("force_factor",10);
        set("str",30);
        set("cor", 30);
        set("per", 40);
        set("int", 30);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        set_skill("unarmed",20);
        set_skill("dodge",20);
        set_skill("move",20);
        set_skill("dreamdance",20);
        set_skill("paull-steps",20);
        map_skill("unarmed","dreamdance");
        map_skill("dodge","paull-steps");
        map_skill("move","paull-steps");

        setup();
      carry_object("/open/dancer/obj/yuboots.c")->wear();
      carry_object("/open/dancer/obj/belt1.c")->wear();
      add_money("silver",50);
}
 int accept_fight(object me)
 {
  if((int)me->query("combat_exp")<=5000)
  {
  command("say �㻹������ҹ���,��ȥ�����������");
  return 0;
  }
  command("say ���ְ�!");
  return 1;
 }
         
      
