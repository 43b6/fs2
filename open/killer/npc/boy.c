#include </open/open.h>
inherit NPC;
void create()
{
  object ob;
  set_name("Сͯ",({"boy"}));
  set("title", "����");
  set("gender", "����");
  set("class","killer");
  set("age",11);
  set("attitude", "killer");
  set("long", "���ڴ˹ۿ�����ѵ���ҵ�����\t
�㲻Ҫ��Ϊ����С���Ӿͺ��۸�,��û��һ���̶�,Ҫɱ���ǲ�����....\n");
   set_skill("rain-throwing",5);
   map_skill("throwing","rain-throwing");
  set("kee",4000);
  set("max_kee",4000);
  set("combat_exp",22345);
  setup();
    add_money("gold",5);
   ob=carry_object("/open/killer/obj/lustar.c");
   ob->add_amount(10);
    ob->wield();
}
