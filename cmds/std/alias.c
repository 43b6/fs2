// alias.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
    int i,flag;
	mapping alias;
    object ob;
    string verb, replace, name, *vrbs;

    flag=0;
    if(wizardp(me)){
     if(arg){
      if(find_player(arg)){
        ob=find_player(arg);
        arg=0;
      }
       else if(FINGER_D->acquire_login_ob(arg)){
         ob = FINGER_D->acquire_login_ob(arg);
         arg=0;
       }
      else ob=me;
      alias=ob->query_all_alias();
      flag=1;
     }
    }
    if(!flag)
	alias = me->query_all_alias();
	if( !arg ) {
		if( !sizeof(alias) ) {
			write("��Ŀǰ��û���趨�κ� alias��\n");
			return 1;
		} else  {
			write("��Ŀǰ�趨����������������£�\n");
			vrbs = keys(alias);
			for(i=0; i<sizeof(vrbs); i++)
				printf("%-15s = %s\n", vrbs[i], alias[vrbs[i]]);
			return 1;
		}
	}

	if (strlen(arg) > 79) arg = arg[0..78];
	if( sscanf(arg, "%s %s", verb, replace)!=2 )
	  if (stringp(alias[arg]))
		printf("���趨���� %s �滻�� :\n%s\n", arg, alias[arg]);
	  else if (alias[arg])
		printf("���趨�����滻�����⣬��ɾ���������趨��\n");
	  else
		printf("��û���趨�����滻 "+arg+"\n");
	else if( verb=="alias" || verb == "go" || verb == "do" )
		return notify_fail("�㲻�ܽ� "+verb+" ָ���趨������;��\n");
	else if (verb == "-d") {
		printf("��ɾ�������滻 %s:\n%s\n", replace, alias[replace]);
		me->set_alias(replace, 0);
	}
	else if( verb=="" )
		return notify_fail("��Ҫ��ʲô alias��\n");
	else {
		if (stringp(me->find_commands(verb))) return
		  notify_fail ("���ȡ�������е�����, �뻻����������.\n");
		if (strsrch(replace, "$*") == -1) replace += " $*";
		printf("���趨�����滻 %s:\n%s\n", verb, replace);
		return me->set_alias(verb, replace);
	}

	return 1;
}

int help (object me)
{
	write(@HELP
ָ���ʽ : alias [-d] <���趨ָ֮��> <ϵͳ�ṩָ֮��>
ָ��˵�� :
           ��ʱϵͳ���ṩָ֮����Ҫ����ܳ����ִ�, ��ʹ��ʱ
        (�����Ǿ����õ���) �����о�������, ��ʱ��(��)����
        �ô�һָ���趨�����ԭ��ָ֮� 
����:
	'alias sc score' ���� sc ȡ�� score ָ�
	'alias' �󲻼Ӳ������г������е����ָ�
	'alias sc' ����ʾ sc ������ָ� (���������Ļ�)
	'alias -d sc' ��ɾ����ԭ�ȶ� sc ���趨
 
���п����� $1, $2, $3 .... ��ȡ����һ���ڶ������������������� $* ȡ��
���еĲ������磺
	'alias pb put $1 in $2'

��ÿ����(��)��
	pb bandage bag

�ͻ�ȡ���ɣ�
	put bandage in bag
	
HELP
);
        return 1;
}
