#include <ansi.h>
int perform( object me )
{
object *enemy = all_inventory( environment(me) );
int fun,i;
fun=me->query("functions/heal/level");
if(me->query("family/family_name")!="������")
return notify_fail ("ֻ�����������ã�\n");
if(me->query_temp("cure")==1)
return notify_fail ("������������Ϣһ���Ӳ���ʹ��!!\n");
if(me->query_skill("shinnoforce",1)< 60 )
return notify_fail ("�����ũ�����ķ��������죡\n");
if(me->query_skill("godcure",1)< 100 )
return notify_fail ("�����٢ҽ���������죡\n");
if(me->query_skill("cure",1)< 100 )
return notify_fail ("��Ļ���ҽ���������죡\n");
if(me->query_skill_mapped("force") != "shinnoforce")
return notify_fail("��û��װ����ũ�����ķ�!!\n");
if(me->query("combat_exp")<1000000)
return notify_fail ("��ľ��鲻��!\n");
if (me->query ("force") < 2000)
return notify_fail ("�����������!\n");
if( me->is_fighting() ) me->start_busy(2);
message_vision (HIW"$N������ũ�����ķ��е�"HIY"����ũ��������"HIW"!!"NOR"\n",me); 
me->add ("force", -2000);
me->set_temp("cure",1);
call_out("out",20,me);
for( i=0; i<sizeof(enemy); i++ )
{
if( enemy[i]->is_character() && !enemy[i]->is_corpse() )
{
enemy[i]->receive_curing("kee",fun*22);
enemy[i]->receive_heal("kee",fun*22);
COMBAT_D->report_status(enemy[i], 1);
}
}      
return 1;  
}
int out(object me)
{
int fun=me->query("functions/heal/level");
tell_object(me,"�㾫��ָ�, �����ٶ�ʹ��������!!\n");
if(fun<100) me->function_improved("heal",100+random(100));
me->delete_temp("cure");
}