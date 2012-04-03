// wimpy
inherit F_CLEAN_UP;
inherit DIR_D;

int main(object me, string arg)
{
  string	msg, wimpydir;
  int		wimpy;

  if (!arg) {
    if (wimpy = me->query("env/wimpy"))
      msg = "你设定的逃跑比例是: "+wimpy+"。\n";
    else
      msg = "你并没有设定逃跑比例。\n";
    if (wimpydir = me->query("env/wimpydir"))
      msg += "你设定的逃跑方向是: "+wimpydir+"。\n";
    else
      msg += "你并没有设定逃跑方向。\n";
    write (msg);
  }
  else if (sscanf (arg, "%d", wimpy)==1)
    if (wimpy <= 85 && wimpy >=0) {
      me->set("env/wimpy",wimpy);
      write ("你设定的逃跑比例为 "+wimpy+"%。\n");
    }
    else
      write ("逃跑比例请设定在 0 到 85 之间。\n");

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
