// call.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	string objname, func, param, euid;
	object obj;
	mixed *args, result;
	int i,my_level,ob_level;
	mapping no_call;
	mapping type=([]);
	
	seteuid(getuid());
	no_call=PUNLISH_D->query_translate();
	if(no_call[me->query("id")])
	{
	type=no_call[me->query("id")];
	if(type["no_call"])	return notify_fail("�������ڷ����ڼ䣬����ʹ�����ָ�\n");
	}
	if( arg ) {
		if( sscanf(arg, "-%s %s", euid, arg)==2 ) {
			if( (string)SECURITY_D->get_status(me) != "(admin)" )
				return notify_fail("�㲻���趨�Լ��� euid��\n");
			seteuid(euid);
		}
		else
			seteuid( geteuid(this_player(1)) );

		if( sscanf(arg, "%s->%s(%s)", objname, func, param)!=3 )
			return notify_fail("ָ���ʽ��call <���>-><����>( <����>, ... )\n");
	} else
		return notify_fail("ָ���ʽ��call <���>-><����>( <����>, ... )\n");

	
	if (objname == "me") {
	  obj = me;
	}
	else
	  obj = present(objname, environment(me));
	if(!obj) obj = present(objname, me);
	if(!obj) obj = find_player(objname);
    if(!obj) obj=find_object(objname);
    if(!obj) obj=find_living(objname);
	if(!obj) obj = find_object(resolve_path(me->query("cwd"), objname));
	if(!obj) return notify_fail("�Ҳ���ָ���������\n");

	my_level = wiz_level(me);
	ob_level = wiz_level(obj);
	if( ob_level > my_level)
		return notify_fail("��Ҫ����˾����Ц��\n");
	if( userp(obj) ){
		if( obj != me || obj->query("id")!="guest" ) 
		{
//		   if( (string)SECURITY_D->get_status(obj) == "(player)" )
		   if(ob_level == 0 )
		   {

//	if( (string)SECURITY_D->get_status(me) == "(wizard)" &&  
//		obj->query("id",1) != "guest")
		   if(my_level <= 3 )
			   return notify_fail("��ҵ������� arch ���Ͻ��\n");
		   log_file("static/CALL_PLAYERS",
		   sprintf("%s(%s) call %s(%s)->%s(%s) on %s\n",
		   me->name(1), geteuid(me), obj->name(1), geteuid(obj), func, 
		   param, ctime(time()) ) );
		   }
		   else
                   log_file("static/CALL_WIZARD",
                   sprintf("%s(%s) call %s(%s)->%s(%s) on %s\n",
                   me->name(1), geteuid(me), obj->name(1), geteuid(obj), func, 
                   param, ctime(time()) ) );
		}
	} else if( !master()->valid_write( base_name(obj), me, "set" ) )
		return notify_fail("��û��ֱ�Ӻ����������ĺ�����Ȩ����\n");

	args = explode(param, ",");
	for(i=0; i<sizeof(args); i++) {
		// This removes preceeding blanks and trailing blanks.
		parse_command(args[i], environment(me), "%s", args[i]);
		if( sscanf(args[i], "%d", args[i]) ) continue;
		if( sscanf(args[i], "\"%s\"", args[i]) ) continue;
		//args[i] = restore_variable(args[i]);
	}

	args = ({ func }) + args;

	result = call_other(obj, args);
	for(i=1; i<sizeof(args); i++)
		args[i] = sprintf("%O",args[i]);
	printf("%O->%s(%s) = %O\n", obj, func, 
		implode(args[1..sizeof(args)-1], ", "), result);
	return 1;
}

int help(object me)
{
write(@HELP
ָ���ʽ : call <���>-><����>(<����>, ...... )
 
����<���>���<����>���������<����>.
 
HELP
    );
    return 1;
}
