inherit NPC;
void create()
{
        set_name("�ֵ�����", ({"blademan","man"}));
        set("long","ħ���Ż�����������������վ�����ԡ�\n");
        set("gender","����");
        set("combat_exp",25000);
        set("attitude","heroism");
        set("age",35);
        set("class","blademan");
        set("score",1000);
        set("force",300);
        set("max_force",300);
        set("force_factor",4);
        set("str",30);
        set("cor", 30);
        set("per", 25);
        set("int", 30);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        set_skill("blade",50);
        set_skill("dodge",50);
        set_skill("parry",50);
        setup();
        carry_object("/open/gsword/obj/blade")->wield();
}
 int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=7000)
  {
   command("say ȥ�����������");
   return 0;
  }
  command("say ���ɣ��Һܾ�û��չ����ˡ�");
  return 1;
  }

