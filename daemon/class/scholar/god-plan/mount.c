#include <ansi.h>
int perform(object me, object target)
{
        mapping exit = environment( me )->query("exits");
        string *dirs;
        int i;
   if( !target ) return notify_fail("你要对谁用计？\n");
   if( !exit ) return notify_fail("这里无处可逃！\n");

   if( me->query("sen") < 10 )
      return notify_fail("你的精神力不够，无法用计。\n");
if(environment(me)->query("no_plan"))
return notify_fail("此地方无法用计。\n");
   if( target->query_temp("mount")==1)
   return notify_fail("对同一人只能用一次。\n");
if(target->query("no_mount")==1)
return notify_fail("此计对此人无效。\n");
   if( me->query_skill("plan", 1) < 20)
      return notify_fail("你的谋略能力不够。\n");
// 不是儒门
   if( me->query("family/family_name") != "儒门")
    return notify_fail("不是儒生，不给你用咧！！^_^\n");
    me->add("sen",-10);
      message_vision("$N对"+ target->name()+ "使出调虎离山之计,诱敌出山,使就我范。\n", me, target);
      if(target->query_temp("no_plan") || target->query("no_plan"))
      {
      message_vision("$N大喝道:调虎离山???你用错地方了,去死吧!!!\n",target);
      target->kill_ob(me);
      me->start_busy(3);
      }
      else{
      message_vision(""+ target->name()+ "中计后便口中念念有词的跑开了...\n", me, target);
        dirs = keys( exit );
        i = random( sizeof(dirs) );
        load_object( exit[dirs[i]] );
      target->move( exit[dirs[i]] );
      }
      target->set_temp("mount",1);
      return 1;
}
