// wimpydir

inherit F_CLEAN_UP;
inherit DIR_D;

int main(object me, string arg)
{
  string	msg;
  int		wimpy;

  if (!arg) {
    if (wimpy = me->query("env/wimpy"))
      msg = "你设定的逃跑比例是: "+wimpy+"。\n";
    else
      msg = "你并没有设定逃跑比例。\n";
    if (arg = me->query("env/wimpydir"))
      msg += "你设定的逃跑方向是: "+cdir(arg)+"。\n";
    else
      msg += "你并没有设定逃跑方向。\n";
  }
  else if (arg == "none")
    me->delete("env/wimpydir");
  else {
    arg = abbrdir (arg);
    me->set("env/wimpydir", arg);
    msg = "你设定的逃跑方向是: "+cdir(arg)+"。\n";
  }

  write (msg);
  return 1;
}
int help(object me)
{
  write(@HELP
指令格式 : wimpy [<方向>]
指令说明 :
           设定逃跑方向，可配合 flee/wimpydir 指令使用。
HELP
    );
    return 1;
}
