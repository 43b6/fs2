#include <ansi.h>
int perform(object me, object target)
{
        mapping exit = environment( me )->query("exits");
        string *dirs;
        int i;
   if( !target ) return notify_fail("��Ҫ��˭�üƣ�\n");
   if( !exit ) return notify_fail("�����޴����ӣ�\n");

   if( me->query("sen") < 10 )
      return notify_fail("��ľ������������޷��üơ�\n");
if(environment(me)->query("no_plan"))
return notify_fail("�˵ط��޷��üơ�\n");
   if( target->query_temp("mount")==1)
   return notify_fail("��ͬһ��ֻ����һ�Ρ�\n");
if(target->query("no_mount")==1)
return notify_fail("�˼ƶԴ�����Ч��\n");
   if( me->query_skill("plan", 1) < 20)
      return notify_fail("���ı������������\n");
// ��������
   if( me->query("family/family_name") != "����")
    return notify_fail("�������������������֣���^_^\n");
    me->add("sen",-10);
      message_vision("$N��"+ target->name()+ "ʹ��������ɽ֮��,�յг�ɽ,ʹ���ҷ���\n", me, target);
      if(target->query_temp("no_plan") || target->query("no_plan"))
      {
      message_vision("$N��ȵ�:������ɽ???���ô�ط���,ȥ����!!!\n",target);
      target->kill_ob(me);
      me->start_busy(3);
      }
      else{
      message_vision(""+ target->name()+ "�мƺ����������дʵ��ܿ���...\n", me, target);
        dirs = keys( exit );
        i = random( sizeof(dirs) );
        load_object( exit[dirs[i]] );
      target->move( exit[dirs[i]] );
      }
      target->set_temp("mount",1);
      return 1;
}
