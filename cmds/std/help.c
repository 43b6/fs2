// help.c

#include <help.h>

inherit F_CLEAN_UP;

string *default_doc_paths = DEFAULT_DOC_PATHS;
string *wiz_doc_paths = WIZ_DOC_PATHS;
string *func_doc_paths = FUNC_DOC_PATHS;

int main(object me, string arg)
{
  int i;
  string file, *search;
  mapping guild;
  string *guild_d;

  seteuid(getuid());

  // 假如没参数, 则显示预设的命令
  if( !arg ) {
    cat(HELP_DIR + "help/topics");
    return 1;
  }

  // 增加职业指令 help 
	file="/daemon/class/normal/cmds/"+arg;
	if(file_size(file+".c")>0)
	{
		file->help(me);
		return 1;
	}
  // 看看是否有该命令, 通常命令里会有 help 讯息
  seteuid(getuid());

  // Support efun/lfun help with same name as other topics such as
  // ed() and ed command.
  if ( sscanf (arg,"%s()",arg)==1 && wizardp(me) && pointerp(func_doc_paths) ) {
    i = sizeof(func_doc_paths);
    while(i--) if( file_size(func_doc_paths[i] + arg)>0 ) {
      me->start_more( read_file(func_doc_paths[i]+arg) );
      return 1;
    }
  }

  if( stringp(file = me->find_command(arg)) ) {
    notify_fail("有 "+arg+" 这个指令存在，但是并没有详细的说明文件。\n");
    return file->help(me);
  }

  // 搜寻私人的 help 的搜寻路径
  if( pointerp(search = me->query("help_search_path")) ) {
    i = sizeof(search);
    while(i--) if( file_size(search[i] + arg)>0 ) {
      me->start_more( read_file(search[i] + arg) );
      return 1;
    }
  }

  // 搜寻预设的搜寻路径, 请看 /include/help.h
  if( pointerp(default_doc_paths) ) {
    i = sizeof(default_doc_paths);
    while(i--) if( file_size(default_doc_paths[i] + arg)>0 ) {
      me->start_more( read_file(default_doc_paths[i] + arg) );
      return 1;
    }
  }

  // 搜寻巫师的搜寻路径, 请看 /include/help.h
  if( pointerp(wiz_doc_paths) ) {
    i = sizeof(wiz_doc_paths);
    while(i--) if( file_size(wiz_doc_paths[i] + arg)>0 ) {
      me->start_more( read_file(wiz_doc_paths[i]+arg) );
      return 1;
    }
  }
  guild=GUILD_D->query_translate();
  guild_d=keys(guild);
  for(i=0;i<sizeof( guild_d);i++)
  {
	file="/daemon/class/"+guild_d[i]+"/cmds/"+arg;
	if(file_size(file+".c")>0)
	{
		file->help(me);
		return 1;
	}
  }

return notify_fail("没有针对"+arg+"这项主题的说明文件。\n");
}

int help(object me)
{
	write(@HELP
指令格式 : help <主题>              例如：> help cmds
           help <函数名称>()        例如：> help call_out()
指令说明 :
           这个指令提供你针对某一主题的详细说明文件，
           若是不指定主题，则提供你有关主题的文件。
HELP
	);
	return 1;
}

