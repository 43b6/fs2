#include <armor.h>
#include <ansi.h>
inherit CLOTH;
object me=this_player();
int cor;
int ekee=me->query("max_kee",1);
void create()
{
        set_name( HIY "�ɽ�ʥ��" NOR ,({"kensai armor","armor"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",0);
                set("long","��ʦ�����ĵĽ������Խ�ʿ����..�Ǽ��ѵ�ѡ��\n");
                set("material","crimsonsteel");
                set("armor_prop/armor",27);
                set("no_sell",1);
                set("no_auc",1);
                set("no_give",1);
                set("no_put",1);
                set("no_drop",1);
                set("no_get",1);
        }
        setup();
            this_object()->set("armor_prop/sword",7);
                this_object()->set("armor_prop/parry", 10);
                this_object()->set("armor_prop/move", 5);
}
void init()
{
     add_action("do_wear","wear");
     add_action("do_remove","remove");

}
int do_wear(string str)
{
     ::wear();
     if( query("equipped") )
     {
        cor = me->query_skill("sword");
      cor = cor*2;
message_vision(HIW"$N������ʥ����·�ʥ���塣\n"NOR,me);
        set_heart_beat(1);
     }
}
int do_remove(string str)
{
   if(str=="kensai armor" || str=="all" || str=="armor")
     if( query("equipped") )
     {
message_vision(YEL"$N������ʥ����ʱ..�Խ��ĸо��ƺ�������Զ��\n"NOR,me);
        set_heart_beat(0);
     }

}

void heart_beat()
{
  if( !objectp(me) )
        {
        set_heart_beat(0);
        return;
        }
  if( me->is_fighting()&&query("equipped")&&me->query("eff_kee")!=ekee )
  {
    if( random(100) > 50)
    {
    me->receive_curing("kee",cor*3);
    me->receive_heal("kee",cor*3);
message_vision(HIY+"\nʥ������ҫ�۹�â��$N��ʱ����������ˬ�������ޱȡ�\n"+NOR,me);
    }
  }
  return;
}
