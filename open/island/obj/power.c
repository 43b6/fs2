inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name(HIG"��Ѫ�꾧"NOR, ({"turtle crystal","crystal"}) );
        set("long",
        "�����̹ž޹�ľ�Ѫ�����ں����������ɣ���������һЩ��������ϰ���������������Ʒ��
����������ʳ(eat)\n");
        set("no_sell",1);
        set("no_give", 1);
        set("no_auc",1);
        set("no_drop",1); 
        set("no_put",1);
        set("unit", "��");
        set("base_unit", "��");
        set("value", 500000);
        set("base_weight", 50);
        set_amount(1);
        setup();
}
void init()
{
        if( this_player()==environment() )
                add_action("eat_pill", "eat");
}
int eat_pill(string arg)
{
        int force;
        object ob,me=this_player();
        force=me->query_skill("force",1);
       
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
    if(me->query("quests/turtlecrystal")==1){
 tell_object(me,"������Ϊ������������ʳ��������Ѫ������֮�ǡ�\n");
 
    return 0;
                                        }

message_vision(
"$N������"HIG"��Ѫ�꾧"NOR"��һ�����ӱ�������$N��������ˬ���ˡ�\n", me);
  me->add("kar",5);
  me->add("cps",5);
  me->set_skill("force",force+10);
  me->clear_condition();
  me->set("quests/turtlecrystal",1);
  add_amount(-1);
  return 1;
}




