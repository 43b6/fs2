inherit NPC;
string magic();
void create()
{
             set("title","��ɣ��������");
       set("nickname","������Ӱ");
          set_name("������", ({"fann love","love"}));
        set("age",45);
        set("long","�����Ĵ󻤷�֮һ,��ɨ����,����ɱ������֮��ëʨ�� лѷ.\n");
          set("gender","Ů��");
         set("class","dancer");
           set("str",30);
        set("con",30);
        set("cor",30);
        set("cps",30);
        set("max_kee",4500);
        set("kee",4500);
          set("combat_exp",1000000);
        set("max_force",2500);
          set("max_atman",2000);
          set("atman",2000);
        set("force",2500);
        set("force_factor",15);
        set_skill("dodge",100);
        set_skill("force",100);
        set_skill("black-steps",100);
        set_skill("unarmed",100);
          set_skill("magic",100);
          set_skill("dremagic",100);
          set_skill("dragonfist",100);
         map_skill("magic","dremagic");
         map_skill("unarmed","dragonfist");
        map_skill("dodge","black-steps");
        set("chat_chance_combat",25);
        set("chat_msg_combat",({
         (: magic :),
}));
        set_temp("apply/damage",150);
        setup();
           carry_object("/open/gsword/obj/f_item");
              carry_object("/open/main/obj/bird_legging")->wear();
          add_money("thousand-cash",2);
        
}

 
string magic()
{
        command("cast firedance");
        command("cast confuse");
        return "\n";
}
void die(){
  object me;
  me= this_object()->query_temp("last_damage_from");
   if( me&& userp(me) ) {
      me->add("head",17);
tell_room(environment(),sprintf("%sɱ���˷�����,�õ�ʮ�ߵ�ս����\n",me->name()));
}
      ::die() ;
}
