// ���̫��û���ߵ���� by ACKY

inherit F_CLEAN_UP;

#define	DAY	365 // ���� DAY ��û����

int check( string arg );
int help( object me );
 
int main( object me, string arg )
{
	int o, sum;
	string *dir, *dir2;
	
        seteuid(getuid());       
        sum = 0;
               
        if( !arg )
        	return help(me);

        if( arg == "all" ) {
		dir = get_dir( "/data/login/" );
		for( o=0; o<sizeof(dir); o++ )
                	sum += check( dir[o] );
                write( "Ŀǰ�ܹ��� "+ sum +" λ��ҡ�\n" );
		return 1;
	}

	if( arg == "count" ) {
		dir = get_dir( "/data/login/" );
		for( o=0; o<sizeof(dir); o++ ) {
			dir2 = get_dir( "/data/login/"+ dir[o] +"/" );
                	sum += sizeof( dir2 );
                }
                write( "Ŀǰ�ܹ��� "+ sum +" λ��ҡ�\n" );
		return 1;
	}

	check( arg );

	return 1;	
}

int check( string arg )
{
	object ob;
	string *user, id, id_tmp;
	int i, j, k, sum, now, count;

	count = 0;
	now = time(); 
	user = get_dir( "/data/user/"+arg+"/" );
	sum = sizeof( user );

        printf( "������, ���Ժ�...\n" );
	for( i=0; i<sum; i++ ) {
                reset_eval_cost();
		id = user[i][0..sizeof(user[i])-3];
		if( find_player( id ) )
			continue;
                if( (string)SECURITY_D->get_status(id)!="(player)" )
			continue;
		if( !ob = FINGER_D->acquire_login_ob( id ) ) {
			printf( "���� %s ������, ϵͳ����ɾ����\n", id );
			k=0;
			for( j=0; j<sizeof(id); j++ )
				if( id[j] == '.' ) {
					k++;
					if( k==2 )
						id_tmp = id[0..j] + "*";
				}
			write( "���� "+ id_tmp +" ���������浵, ���顣\n" );
			rm( "/data/user/"+arg+"/"+id+".o" );
			rm( "/data/login/"+arg+"/"+id+".o" );
			rm( "/data/backup/user/"+arg+"/"+id+".o" );
			rm( "/data/backup/login/"+arg+"/"+id+".o" );
			rm( "/data/backup2/user/"+arg+"/"+id+".o" );
			rm( "/data/backup2/login/"+arg+"/"+id+".o" );
			rm( "/data/sig/"+arg+"/"+id+".sig" );
 			rm( "/data/mail/"+arg+"/"+id+".o" );
			
 			count++;
		}
		if( objectp(ob) ) {
			if( ob->query("id")=="amandy" )
				ob->delete("ok_ip");
			if ( (now-ob->query("last_on"))/86400 > DAY )	{
				printf( "%s(%s) �Ѿ����� "+ DAY +" ��û����, ϵͳ��������ɾ����\n", ob->name(), ob->query("id"));
	 			if( ob->query("clan") )
	 				CLAN_D->clan_promote( ob->query("clan/id"), ob->query("id"), "banish", ob->query("clan/bank") );
				rm( "/data/user/"+arg+"/"+id+".*" );
	 			rm( "/data/login/"+arg+"/"+id+".*" );
	 			rm( "/data/backup/user/"+arg+"/"+id+".*" );
	 			rm( "/data/backup/login/"+arg+"/"+id+".*" );
	 			rm( "/data/backup2/user/"+arg+"/"+id+".*" );
	 			rm( "/data/backup2/login/"+arg+"/"+id+".*" );
	 			rm( "/data/sig/"+arg+"/"+id+".*" );
	 			rm( "/data/mail/"+arg+"/"+id+".*" );	 			
	 			count++;
			}
			destruct( ob );
		}
	}
	reclaim_objects();

        write( "\n\nԭ�� ID �� " + arg + " ��ͷ�����, �ܹ��� " + sum + " λ��\n" );
        write( "���� "+ count +" λ���� "+ DAY +" ��δ���ߵ����, �ѱ�ϵͳ������ˡ�\n" );
        write( "�����ܹ�ʣ�� " + ( sum-count ) + " λ��ҡ�\n" );

	return sum-count;
}	

int help( object me )
{
	write(@TEXT

	auto [Ӣ����ĸ(a~z)]
	
	����: auto c 		��� ID �� c ��ͷ�����
	      auto all  	���ȫ�����
	      auto count	���������������

	��� ID �� (a~z) ��ͷ, �ҳ��� 365 ��δ���ߵ���ҡ�

	Ϊ���� wiz ʹ�ò���, ��û���� wiz ֱ����������,
	�Է� wiz ��������, ����С�Ľ���ҿ���...

						by ACKY
TEXT
	);
	return 1;
}

