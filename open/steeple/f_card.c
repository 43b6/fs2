inherit ITEM;
#include <ansi.h>
void create()
{
set_name("��ս��Ƭ",({"fight_card","card"}));
set("long","һ��ȫ�µ�ս����Ƭ������ͨ������󣬻��Զ����¼�¼��
��Ҫ�����µļ�¼����ǵ�Ҫ����Ʊ����ȥ���¡�");
set("value",0);
set("unit","Ƭ");
set("base_unit","Ƭ");
setup();
}

void init ()
{
object me=this_player();
int i=me->query("quest/start_game");
int a=i-1;
int j=me->query("quest/lose_game");
if(me->query("quest/start_game"))
        {
        set_name(HIW"LV"+a+"  "+me->query("name")+"��ս����Ƭ"NOR,({"fight_card","card"}));
        set("long","
 
"HIW"��������������������������������������������������������������������������������
��������������������������������������������������������������������������������
����                          ������  ���ƾ�Ƭ                              ����
�����x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x����
���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x��"NOR"


                   ���֣�"HIW+me->query("name")+NOR"

                   ���ɣ�"NOR+me->query("clan/name")+NOR"

                   ʦ����"NOR+me->query("family/master_name")+NOR"

                   Ŀǰ��ս¥�㣺�� "HIY+i+NOR" ¥

                   Ŀǰ�Ǽ�ʧ�ܴ����� "HIY+j+NOR" ��
        ");
        }
}
