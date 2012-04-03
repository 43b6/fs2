// edguild.c
// usage: edit guild database.
// author: Spock @ FF	98.Aug.18.
// last modified by Spock @ FF	98.Aug.18.
// related code: /adm/daemons/guildd.c
// note: guild data system is written by fund.

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        string class, guild, master;

        if( !arg )
		return notify_fail("ָ���ʽ��edguild <ְҵӢ������> <������������> <������������>\n");

        if( sscanf ( arg,"%s %s %s",class, guild, master) == 3 ) {
		GUILD_D->add_translate( class, guild, master );
		write( "ְҵ: " + class + ", ����: " + guild + ", ����: " + master + "\nOk.\n");
                return 1;
        }

        return 0;
}

int help()
{
        write ( @HELP
ָ���ʽ��edguild <ְҵӢ������> <������������> <������������>
HELP
        );
        return 1 ;
}
