% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/STVARconstruction.R
\name{get_hetsked_sstvar}
\alias{get_hetsked_sstvar}
\title{Switch from two-regime reduced form STVAR model to a structural model identified by heteroskedasticity}
\usage{
get_hetsked_sstvar(stvar, calc_std_errors = FALSE)
}
\arguments{
\item{stvar}{a an object of class \code{'stvar'}, created by, e.g., \code{fitSTVAR},
specifying a reduced form or a structural model}

\item{calc_std_errors}{Calculate approximate standard errors (based on standard asymptotics)?}
}
\value{
Returns an object of class \code{'stvar'} defining a structural STVAR model identified by heteroskedasticity,
  with the main diagonal of the impact matrix normalized to be positive.
}
\description{
\code{get_hetsked_sstvar} constructs structural STVAR model identified by heteroskedasticity
  based on a reduced form STVAR model.
}
\details{
The switch is made by simultaneously diagonalizing the two error term covariance matrices
  with a well known matrix decomposition (Muirhead, 1982, Theorem A9.9) and then normalizing the
  diagonal of the matrix W positive (which implies positive diagonal of the impact matrix). Models with
  more that two regimes are not supported because the matrix decomposition does not generally
  exists for more than two covariance matrices.
}
\seealso{
\code{\link{fitSSTVAR}}, \code{\link{STVAR}}, \code{\link{fitSTVAR}}
 \itemize{
   \item Muirhead R.J. 1982. Aspects of Multivariate Statistical Theory, \emph{Wiley}.
 }
}
