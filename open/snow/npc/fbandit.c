inherit NPC;
void create()
{
        set_name("ѩ�Ե���", ({"snow-trainee","trainee"}));
        set("gender", "����" );
        set("long", "��������ѵ���ľ�Ӣ���ӡ�\n");
        set("combat_exp",150000);
        set("attitude","heroism");
        set("age",29);
        set("force",800);
        set("max_gin",200);
        set("max_kee",800);
        set("kee",800);
        set("max_force",800);
        set("force_factor",10);
  set("chat_chance",30);
 set("chat_msg",({
(: random_move :),
 }));
        set("str", 25);
        set("cor", 25);
        set("per", 25);
        set("int", 25);
        set("cps", 25);
        set("con", 25);
        set("spi", 25);
        set("kar", 25);
        set_skill("snow-martial", 85);
        set_skill("snowforce", 75);
        set_skill("black-steps",75);
        set_skill("unarmed",85);
        set_skill("dodge",75);
        set_skill("parry",75);
        set_skill("move", 75);
        set_skill("force",75);
        map_skill("unarmed", "snow-martial");
        map_skill("parry", "snow-martial");
        map_skill("force", "snowforce");
        map_skill("dodge", "black-steps");
        map_skill("move", "black-steps");
        setup();
        carry_object("/open/gsword/obj/ff_pill");
        carry_object("/open/snow/obj/claw.c")->wield();
        add_money("gold", 5);
}
 void die()
{
   object me;
   me = this_object()->query_temp("last_damage_from");
   if (me && userp(me))  {
   me->add("snow-head",1);
tell_room(environment(),sprintf("%s��ѩ�Ե�����������һ����ͷ��\n",me->name()));
   }
   ::die();
}
void greeting(object ob)
{
if(ob->query("family/family_name")=="ħ����"||ob->query("family/family_name")=="ħ��Ī��")
{
   command("say Ѫϴħ����ɱ��ɱ��ɱ��");
      kill_ob(ob);
       }   }
