#include <armor.h>
#include <ansi.h>
inherit EQUIP;
object me=this_player();
int cor,kar,intt,spi,cps;
void create()
{
        set_name(HIY"��ʥ����"NOR,({"kensai ring","ring"}) );
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value", 0);
        set("material","gem");
        set("long","��Ϊ��ʥר�õ�����..�ƺ���ǿ���������\n");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
            set("armor_type","finger");
            set("armor_prop/armor",20);
        }
        setup();
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
        kar = me->query("kar",1);
        cor = me->query("cor",1);
        cps = me->query("cps",1);
        spi = me->query("spi",1);
        intt = me->query("int",1);
message_vision(HIC"���Ͻ�ʥ����..��ʥ֮��¤��$Nȫ��\n"NOR,me);
        set_heart_beat(1);
     }
}
int do_remove(string str)
{
   if(str=="swordmaster ring" || str=="all" || str=="ring")
     if( query("equipped") )
     {
message_vision(YEL"$N�����˽�ʥ����..��ʥ֮����ʱ��ʧ��\n"NOR,me);
        set_heart_beat(0);
     }
}

void heart_beat()
{
object *enemy;
int i;
  if( !objectp(me) )
        {
        set_heart_beat(0);
        return;
        }
  if( me->is_fighting()&&query("equipped")&&me->is_busy() )
  {
enemy=me->query_enemy();
i=random(sizeof(enemy));

if( random(cor+cps+spi) > 85-random(kar+intt) )
    {
    me->delete_busy();
message_vision(HIW+"\n��ʥ֮���X����$Nȫ��..ʹ��������ˬ��
\n"+NOR,me);
    }
  }
  return;
}
