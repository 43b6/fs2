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

  // ����û����, ����ʾԤ�������
  if( !arg ) {
    cat(HELP_DIR + "help/topics");
    return 1;
  }

  // ����ְҵָ�� help 
	file="/daemon/class/normal/cmds/"+arg;
	if(file_size(file+".c")>0)
	{
		file->help(me);
		return 1;
	}
  // �����Ƿ��и�����, ͨ����������� help ѶϢ
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
    notify_fail("�� "+arg+" ���ָ����ڣ����ǲ�û����ϸ��˵���ļ���\n");
    return file->help(me);
  }

  // ��Ѱ˽�˵� help ����Ѱ·��
  if( pointerp(search = me->query("help_search_path")) ) {
    i = sizeof(search);
    while(i--) if( file_size(search[i] + arg)>0 ) {
      me->start_more( read_file(search[i] + arg) );
      return 1;
    }
  }

  // ��ѰԤ�����Ѱ·��, �뿴 /include/help.h
  if( pointerp(default_doc_paths) ) {
    i = sizeof(default_doc_paths);
    while(i--) if( file_size(default_doc_paths[i] + arg)>0 ) {
      me->start_more( read_file(default_doc_paths[i] + arg) );
      return 1;
    }
  }

  // ��Ѱ��ʦ����Ѱ·��, �뿴 /include/help.h
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

return notify_fail("û�����"+arg+"���������˵���ļ���\n");
}

int help(object me)
{
	write(@HELP
ָ���ʽ : help <����>              ���磺> help cmds
           help <��������>()        ���磺> help call_out()
ָ��˵�� :
           ���ָ���ṩ�����ĳһ�������ϸ˵���ļ���
           ���ǲ�ָ�����⣬���ṩ���й�������ļ���
HELP
	);
	return 1;
}

