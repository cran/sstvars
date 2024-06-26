% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/uncondMoments.R
\name{get_Sigmas}
\alias{get_Sigmas}
\title{Calculate the dp-dimensional covariance matrices \eqn{\Sigma_{m,p}} in the transition weights
 with \code{weight_function="relative_dens"}}
\usage{
get_Sigmas(p, M, d, all_A, all_boldA, all_Omegas)
}
\arguments{
\item{p}{a positive integer specifying the autoregressive order}

\item{M}{a positive integer specifying the number of regimes}

\item{d}{the number of time series in the system, i.e., the dimension}

\item{all_A}{4D array containing all coefficient matrices \eqn{A_{m,i}}, obtained from \code{pick_allA}.}

\item{all_boldA}{3D array containing the \eqn{((dp)x(dp))} "bold A" (companion form) matrices of each regime,
obtained from \code{form_boldA}. Will be computed if not given.}

\item{all_Omegas}{a \code{[d, d, M]} array containing the covariance matrix Omegas}
}
\value{
Returns a \code{[dp, dp, M]} array containing the dp-dimensional covariance matrices for each regime.
}
\description{
\code{get_Sigmas} calculatesthe dp-dimensional covariance matrices \eqn{\Sigma_{m,p}} in
 the transition weights with \code{weight_function="relative_dens"} so that the algorithm proposed
 by McElroy (2017) employed whenever it reduces the computation time.
}
\details{
Calculates the dp-dimensional covariance matrix using the formula (2.1.39) in Lütkepohl (2005) when
 \code{d*p < 12} and using the algorithm proposed by McElroy (2017) otherwise.

 The code in the implementation of the McElroy's (2017) algorithm (in the function \code{VAR_pcovmat}) is
 adapted from the one provided in the supplementary material of McElroy (2017). Reproduced under GNU General
 Public License, Copyright (2015) Tucker McElroy.
}
\references{
\itemize{
   \item Lütkepohl H. 2005. New Introduction to Multiple Time Series Analysis,
           \emph{Springer}.
   \item McElroy T. 2017. Computation of vector ARMA autocovariances.
         \emph{Statistics and Probability Letters}, \strong{124}, 92-96.
 }
}
\keyword{internal}
