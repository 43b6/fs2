inherit NPC;

string do_ask (object me);

void create()
{
         set_name("��Ů",({"maid"}));
        set("long", "
����С�㰲ȫ����Ů�������������...��
");
        
        set("age", 19);
        set("int", 30);
        set("cps", 24);
        set("str", 23);
        set("cor", 22);
        set("spi", 29);
        set("con", 26);
        set("kar", 27);
        set("per", 29);
    set("combat_exp",200000);
    set("force",1000);
    set("kee",700);
    set("max_kee",700);
    set( "force_factor", 10);
     set("max_force", 1000);
      set_skill("dodge", 70);
      set_skill("blade", 85);
      set_skill("linpo-steps", 70);
      set_skill("dragon-blade", 85);
          set_skill("parry", 70);
        set_skill("unarmed",50);
        map_skill("parry" ,"dragon-blade");
        map_skill("blade","dragon-blade");
        map_skill("dodge","linpo-steps");

        set( "gender", "Ů��");


        set("limbs", ({ "ͷ��",  "˫��", "˫��", "����" ,"����","����"}) );
     
        set("attitude", "peaceful");


      
        setup();
     carry_object("/daemon/class/blademan/obj/blade1.c")->wield();
     carry_object("/daemon/class/blademan/obj/robe2.c")->wear();
     carry_object("/daemon/class/blademan/obj/boots1.c")->wear();
     carry_object("/daemon/class/blademan/obj/topknot.c")->wear();
          add_money("gold",5);
}
void greeting(object ob)
{
        if( ob->query("gender")=="����")
        {
         command("say �� ! ��ɫ�Ǳ��� ! ");
      kill_ob(ob);
        command("close door");
       }   }
