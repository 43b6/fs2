#include </open/open.h>
inherit NPC;
void create()
{
          set_name("����������",({"officr nameiamuro","officer","nameiamuro"}))
;
        set("title","��ɣ����ı");
        set("long","���Ƿ�ɣ�ĸ���ı, ���������ִ�½����Ҫ���� ��\n");
         set("gender","Ů��");
      set("attitude","aggressive");
        set("combat_exp", 500000);
        set("kee",1300);
        set("max_kee",1300);
        set("age",41);
        set("force",3000);
        set("max_force",3000);
        set_skill("force",70);
        set_skill("blade",90);
        set_skill("gforce",60);
        set_skill("mirage-steps",70);
        set_skill("season-flower-blade",90);
        map_skill("force","gforce");
        map_skill("dodge","mirage-steps");
        map_skill("move","mirage-steps");
        map_skill("parry","season-flower-blade");
        map_skill("blade","season-flower-blade");
        set("force_factor",10);
        set("chat_chance_combat", 30);
        setup();
        carry_object(PING_OBJ"gblade")->wield();
        add_money("gold",5);
}
void die(){
  object me;
  me= this_object()->query_temp("last_damage_from");
  if( me&& userp(me) ) {
      me->add("head",10);
tell_room(environment(),sprintf("%sɱ���˰���������,�õ�ʮ��ս����\n",me->name()));
}
      ::die() ;
}
