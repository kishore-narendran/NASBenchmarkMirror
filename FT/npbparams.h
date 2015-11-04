c CLASS = S
c  
c  
c  This file is generated automatically by the setparams utility.
c  It sets the number of processors and the class of the NPB
c  in this directory. Do not modify it by hand.
c  
        integer nx, ny, nz, maxdim, niter_default
        integer ntotal, nxp, nyp, ntotalp
        parameter (nx=64, ny=64, nz=64, maxdim=64)
        parameter (niter_default=6)
        parameter (nxp=nx+1, nyp=ny)
        parameter (ntotal=nx*nyp*nz)
        parameter (ntotalp=nxp*nyp*nz)
        logical  convertdouble
        parameter (convertdouble = .false.)
        character compiletime*11
        parameter (compiletime='23 Oct 2015')
        character npbversion*3
        parameter (npbversion='3.3')
        character cs1*8
        parameter (cs1='gfortran')
        character cs2*6
        parameter (cs2='$(F77)')
        character cs3*25
        parameter (cs3='-L/usr/local/lib -fopenmp')
        character cs4*20
        parameter (cs4='-I/usr/local/include')
        character cs5*11
        parameter (cs5='-O -fopenmp')
        character cs6*2
        parameter (cs6='-O')
        character cs7*6
        parameter (cs7='randi8')
