//harass.c 本来是要给玩家反迫害的，看哪个大神要拿去用在这方面，欢迎。
//
//这个命令会记录玩家所见到的讯息！
//
//by wade@FS 89/10/26

inherit F_CLEAN_UP;
int help (object);

int main(object me, string str)
{
  if (!str)
    return (help (me));

  if (str == "stop") {
    me->delete_temp ("记录");
  }
  else {
    me->set_temp("记录长度", 0);
    me->set_temp("记录", str);
  }
  return 1;
}

int help(object me)
{
write(@HELP
指令格式 : harass 档名|stop

	这个指令会让巫师记录他所见到的所有讯息。
	档案会记录在 "/log/harass/档名"
	要停止就下  harass stop
	注意：会造成记录档过大的问题。
	      请在启动档中设定：
		#define HARASS 100	<-- 100 行

HELP
    );
    return 1;
}
