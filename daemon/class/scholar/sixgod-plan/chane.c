// buy sueplane ����ѿ�
#include <ansi.h>
object user;
int perform(object me,object target)
{
    int i,flag=0;
	object *all = me->query_enemy();
    object ob;
        if(!me->is_fighting())
        return notify_fail("����ѿ�ֻ����ս����ʹ�á�\n");
    if( me->query("sen") < 100 )
        return notify_fail("��ľ��񲻹����У��޷�ʹ��������ԡ�\n");
    if( all[i]->query_temp("chane")==1 )
                  return notify_fail("��ͬ��ı�ԣ���ʹ�þ�ʧЧ�ˡ�\n");
	if( me->query_skill("plan",1) < 30 )
        return notify_fail("���ı������������\n");
    me->add("sen",-10);
// �������ŵĻ�....
        if( me->query("family/family_name") != "����")
    return notify_fail("�������������������֣���^_^\n");
        message_vision( HIW + @LONG
$Nʹ����������еġ�����ѿǡ������±���Ĳ�Ӱս��!!!
LONG + NOR , me );
		for( i = 0 ; i < sizeof(all) ; i ++ ) 
                all[i]->set_temp("chane",1);    //
      for(i=0;i<sizeof(all);i++)
      {
      if(all[i]->query_temp("no_plan") || all[i]->query("no_plan"))
      {
    flag=1;
message_vision("$N�ٺ�Ц��:����ʹ�ý���ѿ�???����,��������˰�!!\n",all[i]);
      all[i]->kill_ob(me);
      me->start_busy(2);
      }
      }
    if(!flag)
     {
        user = this_player();
        ob=new("/u/s/sueplan/sixgod-plan/npc/yun.c");
        ob->move(environment(this_player()));
        ob->set_leader(me);
        ob->fight(all);
        ob->invocation(user);
		me->remove_all_killer();
    }
        return 1;
}

