inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name(HIY"������Ԫ"NOR, ({"dragon vigor","vigor"}) );
        set("long",
        "���ǻƽ��������Ԫ�����Դ��������������ϰ���������������Ʒ��
���������̷�(swallow)\n");
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
                add_action("eat_pill", "swallow");
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
    if(me->query("quests/dragonvigor")==1){
 tell_object(me,"��Ԫֻ�ܷ���һ�Σ�����ᱻ���Ŀ������ƣ�����ʧ����\n");
 
    return 0;
                                        }

message_vision(
"$N������"HIY"��Ԫ"NOR"��һ�������Ӻ�ͷ���븹�У�$N����������\n", me);
  me->add("str",5);
  me->add("cor",5);
  me->set_skill("force",force+10);
  
  me->clear_condition();
  me->set("quests/dragonvigor",1);
  add_amount(-1);
  return 1;
}





