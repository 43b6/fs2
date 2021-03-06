// groups.c
//
// 用来一次寄同一封信给特定的一堆人
// by wade 7/10/1996
//
inherit F_CLEAN_UP;

int help(object me);

int main(object me, string arg)
{
  string sw, index, cont, *group;
  mapping groups;

  groups = me->query("groups");
  if (!arg)
    printf ("你设定的群组有: %O\n", me->query("groups"));
  else if (arg[0..0] == "-") {
    if (sscanf (arg, "%s %s", sw, arg) != 2)
      return help(me);
    if (sw == "-a") {
      if (sscanf (arg, "%s %s", index, cont) != 2)
        return help(me);
      if ( !groups || sizeof(groups) == 0 )
	me->set("groups/"+index, ({ cont }) );
      else if (!group=groups[index])
	me->set("groups/"+index, ({ cont }) );
      else if (member_array(cont, group) == -1) {
	group += ({ cont });
	me->set("groups/"+index, group);
      }
      write ("增加好了.\n");
    }
    else if (sw == "-d") {
      if (!groups)
        write ("你根本没设过 groups!\n");
      else if (sscanf (arg, "%s %s", index, cont) != 2)
        me->delete("groups/"+index);
      else {
	group = groups[index];
	if (member_array(cont, group) != -1) {
	  group -= ({ cont });
	  me->set("groups/"+index, group);
	}
      }
      group = me->query("groups/"+index);
      if (group && group == ({}) )
        me->delete("groups/"+index);
      groups = me->query("groups");
      if (groups && sizeof(groups) == 0 )
        me->delete("groups");
      write ("删除完毕.\n");
    }
    printf ("新的群组是: %O\n", me->query("groups/"+index));
  }
  else
    printf ("你的群组设定是: %O\n", me->query("groups/"+arg));
  return 1;
}

int help(object me)
{
  write(@HELP
指令格式 : groups [-a|-d group [who]]
           groups                        <-- 查现有的设定
           groups -a <group> <who>       <-- 把 who 加入 group 这个群组
           groups -d <group>             <-- 把 group 这个群组砍掉
           groups -d <group> <who>       <-- 把 who 从 group 这个群组拿掉
指令说明 :
           本命令目前只为了一次寄信给很多人的时候用。
使用范例 :
           groups
           groups -a test wade
           groups -a test chun
           groups -d test chun
           groups -d test
HELP);
    return 1;
}
 
