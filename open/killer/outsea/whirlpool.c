inherit ITEM;
#include <ansi.h>
void create()
{
set_name("������",({"whirlpool"}));
set("no_get",1);
set("no_sac",1);
setup();
}
void init()
{
object me;
me=this_player();
if(present("dragon_stone",me))
{
message_vision(HIY"\n\n����ңԶ����ԭ��ʿ"HIR+me->query("name")+HIY"����������Ϊ�����ɣ�\n\n"NOR,me);
destruct(present("dragon_stone",me));
me->start_busy(4);
call_out("s_msg",1,me);
}
}
int s_msg(object me)
{
message_vision(HIB"\n\n��������Ȼ��$N���˹�����$N�����˱���Χ�ں����е����ġ�\n\n"NOR,me);
call_out("s_msg2",2,me);
return 1;
}
int s_msg2(object me)
{
message_vision(HIY"\n\n$N����������Ĩ��һ���Ť���������У�����ֱ����\n\n"NOR,me);
me->move(__DIR__"island/island");
message_vision(HIR"\n\n$N�������и��͵����\n"NOR,me);
return 1;
}