// kill.c
//Modify By Acelan...99.7.27......Chan 大大说 同一个人对同一个人下 kill 指令 需间隔五秒

#include <ansi.h>

int help( object me );

int wait_kill( object me , object obj )
{
        message_vision( HIY "$n遭到$N突如其来攻击，顿时惊讶万分，不知所措！\n" NOR,me,obj);
     obj->start_busy(1); //修正..因为躲起来下kill话会busy三回..修正为一回 by chan
        me->delete_temp("invis");
}

int group_kill( object me , object obj )
{
        object *all = me->query_team();
        int i;
        for( i = 0 ; i < sizeof(all) ; i ++ ) {
        if(present(obj,environment(all[i]))) {
                all[i]->kill_ob( obj );
                obj->kill_ob( all[i] );

//Add By AceLan...是我方下 kill 所以在 obj 身上设 mark
                obj->set_temp("killer"+ all[i]->query("id"), 1);
//五秒钟后解除
                call_out("remove_killer",5,obj,all[i]->query("id"));

        }
        }
}

//移除 killer 的 mark...By AceLan
int remove_killer(object obj,string name)
{
    if(obj)
   obj->delete_temp("killer"+ name);
   return 1;
}

int main(object me, string arg)
{
  object obj, pal;
  string *killer, callname;


  if( !arg )
    return help(me);

  arg = lower_case(arg);
  me->delete_temp("cmd_cnt");  
  if(!objectp(obj = present(arg, environment(me))) || obj->gage(me))
    return notify_fail("你想杀死谁啊?!\n");

  if( !obj->is_character() || obj->is_corpse() )
    return notify_fail("看清楚一点，那并不是活物。\n");

  if(!obj->query("pker")) //pker没有安全的区域
   {
   if( environment(me)->query("no_kill") || environment(me)->query("no_fight") || me->query("id")=="guest")
     return notify_fail("这里不准砍杀。\n");
   }
  if (in_edit(obj) || in_input(obj) || obj->query_temp("netdead"))
    return notify_fail ("等他醒过来再砍吧.\n");

  if(obj==me) return notify_fail ("想自杀吗? 用 suicide -f\n");

 if( obj->query("id")!="swy" && wizardp(obj) && !wizardp(me) )  
		return notify_fail( "你无论怎么砍, 就是碰不着" + obj->query("name") + "。\n" );
	if( wizardp(me) && userp(obj) && wizhood(me)!="(manager)" && wizhood(me) != "(admin)" )
		return notify_fail( "巫师不能乱砍玩家, 若要测试请以专门的测试员来测试。\n" );
	if( !userp(obj) && obj->query("no_kill") )
		return notify_fail( "你不得砍杀他。\n" );
	if( ((me->query("mud-age") - obj->query("mud_age")) > 172800) && userp(obj) && userp(me) )
		return notify_fail("请勿以长辈身份欺负晚辈。\n");
	if( obj->query_temp("killer"+(string)me->query("id")))
		return notify_fail( "你已砍杀得满身大汗。\n" );

  callname = obj->query("name");

  message_vision("\n$N对着$n喝道：「" 
    + callname + "！今日不是你死就是我活！”\n\n", me, obj);

  if( !userp(obj) && !obj->accept_kill(me) )
	return notify_fail( "看起来你砍不到"+obj->name()+"。\n" );

  if( obj->query("master") )
	if( obj->query("combat_exp") < 100000 || environment(obj)->query("pkroom") ||
		environment(obj)->query("no_die_room") )
		return notify_fail( "留给" +obj->name()+ "一条生路吧。\n" );

  me->set_temp("killer_time",time());

  if( obj->query_temp("pal")==me && !wizardp(obj) )
	return notify_fail( "你杀昏头啦?\n" );

  if( pal=me->query_temp("pal") )
	if( present( pal, environment(me) ) ) {
		pal->kill_ob(obj);
	}
  me->kill_ob(obj);
  obj->kill_ob(me);

//Add By AceLan...是我方下 kill 所以在 obj 身上设 mark
  obj->set_temp("killer"+ me->query("id"),1);
//五秒钟后解除
  call_out("remove_killer",5,obj,me->query("id"));

  if( me->is_team_leader() ) group_kill( me , obj );
  if( me->query_temp("invis") && obj->query_temp("see-wait") != me )
                wait_kill( me , obj );

  return 1;
}

int help(object me)
{
  write(@HELP
指令格式 : kill <人物>
指令说明 : 
           这个指令让你主动开始攻击一个人物，并且嚐试
         杀死对方，kill 和 fight 最大的不同在于双方将
         会真刀实枪地打斗，也就是说，会真的受伤。由于
          kill 只需单方面一厢情愿就可以成立，因此你对
         任何人使用 kill 指令都会开始战斗，通常如果对
         方是 NPC 的话，他们也会同样对你使用 kill。
           当有人对你使用 kill 指令时会出现红色的字样
         警告你，对于一个玩家而言，如果你没有对一名敌
         人使用过 kill 指令，就不会将对方真的打伤或杀
         死( 使用法术除外 )。
其他参考 :
           fight
特别说明 :
           有关 fight 跟 kill 的区分请看 'help combat'。
           有关 pk的问题请看"help pk"。
HELP
    );
    return 1;
}
 
